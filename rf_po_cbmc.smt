;;;;;;;;;;;==========================Read From Relation================================
(assert (or (not (>= |x#1$wclk$8| |x#4$rclk$8|)) (not |memory_model::choice_rf18|)))
(assert (or (not (>= |x#2$wclk$8| |x#4$rclk$8|)) (not |memory_model::choice_rf19|)))
(assert (or (not (>= |x#3$wclk$8| |x#4$rclk$8|)) (not |memory_model::choice_rf20|)))
(assert (or |memory_model::choice_rf18| |memory_model::choice_rf19| |memory_model::choice_rf20|))


(assert (or (not (>= |x#1$wclk$8| |x#5$rclk$8|)) (not |memory_model::choice_rf21|)))
(assert (or (not (>= |x#2$wclk$8| |x#5$rclk$8|)) (not |memory_model::choice_rf22|)))
(assert (or (not (>= |x#3$wclk$8| |x#5$rclk$8|)) (not |memory_model::choice_rf23|)))
(assert (or |memory_model::choice_rf21| |memory_model::choice_rf22| |memory_model::choice_rf23|))

(assert (or (not (>= |y#1$wclk$8| |y#2$rclk$8|)) (not |memory_model::choice_rf24|)))
(assert (or (not (>= |y#4$wclk$8| |y#2$rclk$8|)) (not |memory_model::choice_rf25|)))
(assert (or (not (>= |y#5$wclk$8| |y#2$rclk$8|)) (not |memory_model::choice_rf26|)))
(assert (or |memory_model::choice_rf24| |memory_model::choice_rf25| |memory_model::choice_rf26|))

(assert (or (not (>= |y#1$wclk$8| |y#3$rclk$8|)) (not |memory_model::choice_rf27|)))
(assert (or (not (>= |y#4$wclk$8| |y#3$rclk$8|)) (not |memory_model::choice_rf28|)))
(assert (or (not (>= |y#5$wclk$8| |y#3$rclk$8|)) (not |memory_model::choice_rf29|)))
(assert (or |memory_model::choice_rf27| |memory_model::choice_rf28| |memory_model::choice_rf29|))

(assert (or (not (>= |m#2$wclk$8| |m#3$rclk$8|)) (not |memory_model::choice_rf31|)))
(assert (or (not (>= |n#2$wclk$8| |n#3$rclk$8|)) (not |memory_model::choice_rf33|)))

;;;;;;;;===========================WS Relation========================================
(assert (or (not (>= |x#1$wclk$8| |x#2$wclk$8|)) (not |memory_model::choice_ws-ext45|)))
(assert (or (not (>= |x#1$wclk$8| |x#3$wclk$8|)) (not |memory_model::choice_ws-ext46|)))
(assert (or (not (>= |y#1$wclk$8| |y#4$wclk$8|)) (not |memory_model::choice_ws-ext47|)))
(assert (or (not (>= |y#1$wclk$8| |y#5$wclk$8|)) (not |memory_model::choice_ws-ext48|)))
(assert (or (not (>= |m#1$wclk$8| |m#2$wclk$8|)) (not |memory_model::choice_ws-ext49|)))
(assert (or (not (>= |n#1$wclk$8| |n#2$wclk$8|)) (not |memory_model::choice_ws-ext50|)))


;;;;;;;============================Program Order Relation=============================
(assert (not (>= |m#1$wclk$8| |n#1$wclk$8|)))

(assert (not (>= |n#1$wclk$8| |x#1$wclk$8|)))

(assert (not (>= |x#1$wclk$8| |y#1$wclk$8|)))

(assert (not (>= |y#1$wclk$8| |temp1wclk|)))

(assert (not (>= |temp1wclk| |temp2wclk|)))
.....
(assert (not (>= |tempnwclk| |m#3$rclk$8|)))
; set_to false
(assert (not (>= |m#3$rclk$8| |n#3$rclk$8|)))
; set_to false
(assert (not (>= |y#2$rclk$8| |x#2$wclk$8|)))
; set_to false
(assert (not (>= |x#2$wclk$8| |y#3$rclk$8|)))
; set_to false
(assert (not (>= |y#3$rclk$8| |m#2$wclk$8|)))
; set_to false
(assert (not (>= |m#2$wclk$8| |x#3$wclk$8|)))


; set_to false
(assert (not (>= |x#4$rclk$8| |y#4$wclk$8|)))
; set_to false
(assert (not (>= |y#4$wclk$8| |x#5$rclk$8|)))
; set_to false
(assert (not (>= |x#5$rclk$8| |n#2$wclk$8|)))
; set_to false
(assert (not (>= |n#2$wclk$8| |y#5$wclk$8|)))

;;; From Read Relation;;;;
(assert (or (>= |y#4$wclk$8| |y#1$wclk$8|) (not (>= |y#2$rclk$8| |y#1$wclk$8|)) (not |memory_model::choice_rf25|)))
(assert (or (not (>= |y#2$rclk$8| |y#5$wclk$8|)) (not |memory_model::choice_rf25|)))
....

;;;;;;=====POF We Want;=============
