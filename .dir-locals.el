((nil .
      ((eval .
             (set (make-local-variable 'project-directory)
                  (file-name-directory (locate-dominating-file default-directory ".dir-local.el"))
                  )
             )
       (eval .
             (set (make-local-variable 'include-directories)
                  (list
                   (expand-file-name
                    (concat project-directory "include"))
                   )
                  )
             )
       (eval setq flycheck-gcc-include-path include-directories)
       (eval setq flycheck-gcc-language-standard "c++14")
       )
      )
 )
