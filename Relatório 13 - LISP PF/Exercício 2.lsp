(defstruct criatura
  nome
  bioma
  profundidade
  perigo)

(defun texto-do-perigo (perigo)
  (case perigo
    (:inofensiva "Inofensiva")
    (:agressiva "Agressiva")
    (:leviata "Leviata: mantenha distancia")
    (otherwise "Desconhecido")))

(defun descreve-criatura (c)
  (format nil "~A - Bioma: ~A - Profundidade: ~A m - ~A"
          (criatura-nome c)
          (criatura-bioma c)
          (criatura-profundidade c)
          (texto-do-perigo (criatura-perigo c))))

(defun abaixo-de (metros catalogo)
  (remove-if-not
    (lambda (c)
      (> (criatura-profundidade c) metros))
    catalogo))

(defparameter *catalogo*
  (list
    (make-criatura :nome "Peeper"
                   :bioma "Recifes Rasos"
                   :profundidade 20
                   :perigo :inofensiva)
    (make-criatura :nome "Stalker"
                   :bioma "Floresta de Algas"
                   :profundidade 80
                   :perigo :agressiva)
    (make-criatura :nome "Reaper"
                   :bioma "Zona de Colisao"
                   :profundidade 300
                   :perigo :leviata)
    (make-criatura :nome "Ghost Leviathan"
                   :bioma "Grande Recife"
                   :profundidade 600
                   :perigo :leviata)))

(defun main ()
  (format t "Catalogo completo:~%")
  (dolist (texto (mapcar #'descreve-criatura *catalogo*))
    (format t "~A~%" texto))

  (let ((filtradas (abaixo-de 100 *catalogo*)))
    (format t "~%Criaturas abaixo de 100 metros:~%")
    (dolist (texto (mapcar #'descreve-criatura filtradas))
      (format t "~A~%" texto))

    (format t "~%Quantidade: ~A~%" (length filtradas))))

(main)
