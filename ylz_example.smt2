;(set-logic QF_UFLIA)

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

; declare oclt variable
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
; oclt-value relation
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
; oclt-some relation
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
;(declare-sort Oc 0)		
(declare-fun wx1 () Oc)	
(declare-fun wx2 () Oc)
(declare-fun wx3 () Oc)
(declare-fun rx4 () Oc)
(declare-fun rx5 () Oc)
(declare-fun wy1 () Oc)
(declare-fun ry2 () Oc)
(declare-fun ry3 () Oc)
(declare-fun wy4 () Oc)
(declare-fun wy5 () Oc)
(declare-fun wm1 () Oc)
(declare-fun wm2 () Oc)
(declare-fun rm3 () Oc)
(declare-fun wn1 () Oc)
(declare-fun wn2 () Oc)
(declare-fun rn3 () Oc)
; PO relation
;(declare-fun oclt (Oc Oc) Bool)
;(assert (and
;(oclt wx1 wx2) (oclt wx1 ry2) (oclt wy1 wx2) (oclt wy1 ry2) (oclt wm1 wx2) (oclt wm1 ry2) (oclt wn1 wx2) (oclt wn1 ry2) 
;(oclt wx2 wm2) (oclt wx2 ry3) (oclt ry2 wm2) (oclt ry2 ry3) 
;(oclt wm2 wx3) (oclt ry3 wx3) 
;(oclt wx3 rm3) (oclt wx3 rn3)
;(oclt wx1 wy4) (oclt wx1 rx4) (oclt wy1 wy4) (oclt wy1 rx4) (oclt wm1 wy4) (oclt wm1 rx4) (oclt wn1 wy4) (oclt wn1 rx4) 
;(oclt wy4 wn2) (oclt wy4 rx5) (oclt rx4 wn2) (oclt rx4 rx5) 
;(oclt wn2 wy5) (oclt rx5 wy5)
;(oclt wy5 rm3) (oclt wy5 rn3)
;))
(assert (and 
(oclt wx1 wy1) (oclt wy1 wm1) (oclt wm1 wn1) (oclt wn1 rm3) (oclt rm3 rn3) (oclt wn1 ry2) (oclt wn1 rx4)
(oclt ry2 wx2) (oclt wx2 ry3) (oclt ry3 wm2) (oclt wm2 wx3) (oclt wx3 rm3)
(oclt rx4 wy4) (oclt wy4 rx5) (oclt rx5 wn2) (oclt wn2 wy5) (oclt wy5 rm3)
))
; POF relation
;(declare-fun oclt (Oc Oc) Bool)
(assert (and 
(oclt wx1 rx4) (oclt wx1 rx5) (oclt wy1 ry2) (oclt wy1 ry3) (oclt wm2 rm3) (oclt wm1 rm3) (oclt wn1 rn3) (oclt wn2 rn3)
))
; CO relation
;(declare-fun oclt (Oc Oc) Bool)
(assert (and 
(oclt wx1 wx2) (oclt wx2 wx3) (oclt wy1 wy4) (oclt wy4 wy5) (oclt wm1 wm2) (oclt wn1 wn2)
))
; RF relation
;(declare-fun oclt (Oc Oc) Bool)
(assert (and 
(=> s_x_4_1 (oclt wx1 rx4)) (=> s_x_4_2 (oclt wx2 rx4)) (=> s_x_4_3 (oclt wx3 rx4))
(=> s_x_5_1 (oclt wx1 rx5)) (=> s_x_5_2 (oclt wx2 rx5)) (=> s_x_5_3 (oclt wx3 rx5))
(=> s_y_2_1 (oclt wy1 ry2)) (=> s_y_2_4 (oclt wy4 ry2)) (=> s_y_2_5 (oclt wy5 ry2))
(=> s_y_3_1 (oclt wy1 ry3)) (=> s_y_3_4 (oclt wy4 ry3)) (=> s_y_3_5 (oclt wy5 ry3))
(=> s_m_3_1 (oclt wm1 rm3)) (=> s_m_3_2 (oclt wm2 rm3)) 
(=> s_n_3_1 (oclt wn1 rn3)) (=> s_n_3_2 (oclt wn2 rn3)) 
))

;;;;;;;;;;Inferred Clauses in Liangze's Paper;;;;;;;;;;
;(assert (and
;(not (and s_y_3_1 s_x_5_1)) (not (and s_x_5_1 s_x_4_2)) 
;(not (and s_x_4_3 s_x_5_1)) (not (and s_y_2_4 s_x_4_3)) (not (and s_y_3_4 s_x_4_3))
;(not (and s_y_3_1 s_y_2_5)) (not (and s_x_5_2 s_y_2_5)) 
;))

(check-sat)
(get-model)
