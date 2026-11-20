(defstruct dominio
  nome
  elemento
  dificuldade
  mora)

(defun bonus-elemental (elemento)
  (case elemento
    (:electro 1.5)
    (:hydro 1.2)
    (otherwise 1)))

(defun recompensa-final (d)
  (* (dominio-mora d)
     (bonus-elemental (dominio-elemento d))))

(defun rota (lista dificuldade-maxima)
  (let* ((filtrados
           (remove-if-not
             (lambda (d)
               (<= (dominio-dificuldade d)
                   dificuldade-maxima))
             lista))
         (textos
           (mapcar
             (lambda (d)
               (format nil "~A - Recompensa: ~,2F mora"
                       (dominio-nome d)
                       (recompensa-final d)))
             filtrados)))
    textos))

(defun main ()
  (let* ((dominios
           (list
             (make-dominio :nome "Dominio Pyro"
                           :elemento :pyro
                           :dificuldade 2
                           :mora 1000)
             (make-dominio :nome "Dominio Hydro"
                           :elemento :hydro
                           :dificuldade 3
                           :mora 2000)
             (make-dominio :nome "Dominio Electro"
                           :elemento :electro
                           :dificuldade 4
                           :mora 3000)
             (make-dominio :nome "Dominio Cryo"
                           :elemento :cryo
                           :dificuldade 1
                           :mora 1500)
             (make-dominio :nome "Dominio Anemo"
                           :elemento :anemo
                           :dificuldade 5
                           :mora 4000)))
         (original (first dominios))
         (copia (copy-dominio original)))

    (format t "Rota ate dificuldade 3:~%")

    (dolist (texto (rota dominios 3))
      (format t "~A~%" texto))

    (format t "~%Total de mora: ~,2F~%"
            (reduce #'+
                    (mapcar #'recompensa-final dominios)))

    (setf (dominio-mora copia) 5000)

    (format t "Mora da copia: ~A~%"
            (dominio-mora copia))

    (format t "Mora do original: ~A~%"
            (dominio-mora original))))

(main)
