(setq default-directory "~/")

(setq c-default-style "bsd"
      c-basic-offset 4)

(setq-default tab-width 4)

(setq-default indent-tabs-mode t)

(electric-indent-mode 1)           ; Enable electric indentation                                                         

(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
