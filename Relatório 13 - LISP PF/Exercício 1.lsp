(defstruct erva
  nome
  preco-por-grama
  toxicidade)

(defun classifica-erva (erva)
  (cond
    ((>= (erva-toxicidade erva) 7) "veneno")
    ((>= (erva-toxicidade erva) 4) "use com cuidado")
    (t "segura")))

(defun preco-da-dose (erva gramas)
  (* (erva-preco-por-grama erva) gramas))

(defun descreve-erva (erva)
  (format nil "~A - Preco por grama: ~,2F - ~A"
          (erva-nome erva)
          (erva-preco-por-grama erva)
          (classifica-erva erva)))

(defun aviso (erva)
  (if (>= (erva-toxicidade erva) 7)
      "Maomao vai testar a erva em si mesma antes."
      "Erva liberada para o paciente."))

(defun main ()
  (let ((ervas
          (list
            (make-erva :nome "Beladona"
                       :preco-por-grama 15.0
                       :toxicidade 9)
            (make-erva :nome "Artemisia"
                       :preco-por-grama 8.0
                       :toxicidade 5)
            (make-erva :nome "Camomila"
                       :preco-por-grama 3.0
                       :toxicidade 1))))
    (dolist (erva ervas)
      (format t "~A~%" (descreve-erva erva))
      (format t "~A~%~%" (aviso erva)))

    (format t "Preco da dose: ~,2F~%"
            (preco-da-dose (first ervas) 2))))

(main)
