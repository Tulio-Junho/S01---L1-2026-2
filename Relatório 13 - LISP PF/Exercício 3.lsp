(defstruct garota-magica
  nome
  escuridao
  bruxas)

(defun escuridao-total (grupo)
  (if (null grupo)
      0
      (+ (garota-magica-escuridao (car grupo))
         (escuridao-total (cdr grupo)))))

(defun total-de-bruxas (grupo)
  (reduce #'+
          (mapcar #'garota-magica-bruxas grupo)
          :initial-value 0))

(defun purifica (g quantidade)
  (make-garota-magica
    :nome (garota-magica-nome g)
    :escuridao (if (>= quantidade
                       (garota-magica-escuridao g))
                   0
                   (- (garota-magica-escuridao g)
                      quantidade))
    :bruxas (garota-magica-bruxas g)))

(defun main ()
  (let* ((madoka (make-garota-magica
                   :nome "Madoka"
                   :escuridao 20
                   :bruxas 3))
         (homura (make-garota-magica
                   :nome "Homura"
                   :escuridao 60
                   :bruxas 10))
         (mami (make-garota-magica
                 :nome "Mami"
                 :escuridao 40
                 :bruxas 7))
         (grupo (list madoka homura mami))
         (sayaka (make-garota-magica
                   :nome "Sayaka"
                   :escuridao 30
                   :bruxas 2))
         (novo-grupo (cons sayaka grupo))
         (homura-purificada (purifica homura 25)))

    (format t "Escuridao original: ~A~%"
            (escuridao-total grupo))

    (format t "Total de bruxas: ~A~%"
            (total-de-bruxas grupo))

    (format t "Escuridao do grupo original: ~A~%"
            (escuridao-total grupo))

    (format t "Escuridao do novo grupo: ~A~%"
            (escuridao-total novo-grupo))

    (format t "Escuridao original de Homura: ~A~%"
            (garota-magica-escuridao homura))

    (format t "Escuridao apos purificacao: ~A~%"
            (garota-magica-escuridao homura-purificada))))

(main)
