(set-logic QF_UFLIA)

; declare SSA program variables
(declare-const x1 Int)	
(declare-const x2 Int)
(declare-const x3 Int)
(declare-const x4 Int)
(declare-const x5 Int)
(declare-const y1 Int)
(declare-const y2 Int)
(declare-const y3 Int)
(declare-const y4 Int)
(declare-const y5 Int)
(declare-const m1 Int)
(declare-const m2 Int)
(declare-const m3 Int)
(declare-const n1 Int)
(declare-const n2 Int)
(declare-const n3 Int)

; declare RF variable
(declare-fun s_x_4_1 () Bool)
(declare-fun s_x_4_2 () Bool)
(declare-fun s_x_4_3 () Bool)
(declare-fun s_x_5_1 () Bool)
(declare-fun s_x_5_2 () Bool)
(declare-fun s_x_5_3 () Bool)
(declare-fun s_y_2_1 () Bool)
(declare-fun s_y_2_4 () Bool)
(declare-fun s_y_2_5 () Bool)
(declare-fun s_y_3_1 () Bool)
(declare-fun s_y_3_4 () Bool)
(declare-fun s_y_3_5 () Bool)
(declare-fun s_m_3_1 () Bool)
(declare-fun s_m_3_2 () Bool)
(declare-fun s_n_3_1 () Bool)
(declare-fun s_n_3_2 () Bool)

;;;;;;;;;;;;Program Semantics Part;;;;;;;
; SSA constraints
(assert (and 
(= x1 1) (= y1 1) (= m1 0) (= n1 0) (= x2 (+ y2 1)) (= m2 y3) (= x3 0) (= y4 (+ x4 1)) (= n2 x5) (= y5 0)
(= m3 1) (= n3 1)       ; error condition
))
; RF-value relation
(assert (and 
(=> s_x_4_1 (= x4 x1) )
(=> s_x_4_2 (= x4 x2) )
(=> s_x_4_3 (= x4 x3) )
(=> s_x_5_1 (= x5 x1) )
(=> s_x_5_2 (= x5 x2) )
(=> s_x_5_3 (= x5 x3) )
(=> s_y_2_1 (= y2 y1) )
(=> s_y_2_4 (= y2 y4) )
(=> s_y_2_5 (= y2 y5) )
(=> s_y_3_1 (= y3 y1) )
(=> s_y_3_4 (= y3 y4) )
(=> s_y_3_5 (= y3 y5) )
(=> s_m_3_1 (= m3 m1) )
(=> s_m_3_2 (= m3 m2) )
(=> s_n_3_1 (= n3 n1) )
(=> s_n_3_2 (= n3 n2) )
))
; RF-some relation
(assert (and 
(or s_x_4_1 s_x_4_2 s_x_4_3)
(or s_x_5_1 s_x_5_2 s_x_5_3)
(or s_y_2_1 s_y_2_4 s_y_2_5)
(or s_y_3_1 s_y_3_4 s_y_3_5)
(or s_m_3_1 s_m_3_2)
(or s_n_3_1 s_n_3_2)
))

;;;;;;;;;;;;Ordering Part;;;;;;;;;;;
; declare the global read/write events
(declare-sort GE 0)		
(declare-const wx1 GE)	
(declare-const wx2 GE)
(declare-const wx3 GE)
(declare-const rx4 GE)
(declare-const rx5 GE)
(declare-const wy1 GE)
(declare-const ry2 GE)
(declare-const ry3 GE)
(declare-const wy4 GE)
(declare-const wy5 GE)
(declare-const wm1 GE)
(declare-const wm2 GE)
(declare-const rm3 GE)
(declare-const wn1 GE)
(declare-const wn2 GE)
(declare-const rn3 GE)
; PO relation
(declare-fun PO (GE GE) Bool)
;(assert (and
;(PO wx1 wx2) (PO wx1 ry2) (PO wy1 wx2) (PO wy1 ry2) (PO wm1 wx2) (PO wm1 ry2) (PO wn1 wx2) (PO wn1 ry2) 
;(PO wx2 wm2) (PO wx2 ry3) (PO ry2 wm2) (PO ry2 ry3) 
;(PO wm2 wx3) (PO ry3 wx3) 
;(PO wx3 rm3) (PO wx3 rn3)
;(PO wx1 wy4) (PO wx1 rx4) (PO wy1 wy4) (PO wy1 rx4) (PO wm1 wy4) (PO wm1 rx4) (PO wn1 wy4) (PO wn1 rx4) 
;(PO wy4 wn2) (PO wy4 rx5) (PO rx4 wn2) (PO rx4 rx5) 
;(PO wn2 wy5) (PO rx5 wy5)
;(PO wy5 rm3) (PO wy5 rn3)
;))
(assert (and 
(PO wx1 wy1) (PO wy1 wm1) (PO wm1 wn1) (PO wn1 rm3) (PO rm3 rn3) (PO wn1 ry2) (PO wn1 rx4)
(PO ry2 wx2) (PO wx2 ry3) (PO ry3 wm2) (PO wm2 wx3) (PO wx3 rm3)
(PO rx4 wy4) (PO wy4 rx5) (PO rx5 wn2) (PO wn2 wy5) (PO wy5 rm3)
))
; POF relation
(declare-fun POF (GE GE) Bool)
(assert (and 
(POF wx1 rx4) (POF wx1 rx5) (POF wy1 ry2) (POF wy1 ry3) (POF wm2 rm3) (POF wm1 rm3) (POF wn1 rn3) (POF wn2 rn3)
))
; CO relation
(declare-fun CO (GE GE) Bool)
(assert (and 
(CO wx1 wx2) (CO wx2 wx3) (CO wy1 wy4) (CO wy4 wy5) (CO wm1 wm2) (CO wn1 wn2)
))
; RF relation
(declare-fun RF (GE GE) Bool)
(assert (and 
(=> s_x_4_1 (RF wx1 rx4)) (=> s_x_4_2 (RF wx2 rx4)) (=> s_x_4_3 (RF wx3 rx4))
(=> s_x_5_1 (RF wx1 rx5)) (=> s_x_5_2 (RF wx2 rx5)) (=> s_x_5_3 (RF wx3 rx5))
(=> s_y_2_1 (RF wy1 ry2)) (=> s_y_2_4 (RF wy4 ry2)) (=> s_y_2_5 (RF wy5 ry2))
(=> s_y_3_1 (RF wy1 ry3)) (=> s_y_3_4 (RF wy4 ry3)) (=> s_y_3_5 (RF wy5 ry3))
(=> s_m_3_1 (RF wm1 rm3)) (=> s_m_3_2 (RF wm2 rm3)) 
(=> s_n_3_1 (RF wn1 rn3)) (=> s_n_3_2 (RF wn2 rn3)) 
))

;;;;;;;;;;Inferred Clauses in Liangze's Paper;;;;;;;;;;
;(assert (and
;(not (and s_y_3_1 s_x_5_1)) (not (and s_x_5_1 s_x_4_2)) 
;(not (and s_x_4_3 s_x_5_1)) (not (and s_y_2_4 s_x_4_3)) (not (and s_y_3_4 s_x_4_3))
;(not (and s_y_3_1 s_y_2_5)) (not (and s_x_5_2 s_y_2_5)) 
;))

(check-sat)
(get-model)
