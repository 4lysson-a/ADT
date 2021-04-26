int x, opt = 0;
    List * li;
    int posicao, matricula;
    do{
        printf("Digite 1 para criar lista\n");
        printf("Digite 2 para Inserir no inicio da lista\n");
        printf("Digite 3 para inserir no final da lista\n");
        printf("Digite 4 para Pesquisar por posicao\n");
        printf("Digite 5 Mostrar conteudo por posicao\n");
        printf("Digite 6 Mostrar conteudo por matricula\n");
        printf("Digite 7 para verificar lista cheia\n");
        printf("Digite 8 para verificar tamanho da lista\n");
        printf("Digite 9 para verificar lista cheia \n");
        printf("Digite 10 para verificar lista vazia \n");
        printf("Digite 11 para sair\n");
        scanf("%d", &opt);
        switch (opt){
            case 1:
                li = criar_lista();
                if(li == NULL){
                    printf("ERRO na criacao\n");

                }else{
                    printf("Lista criada com sucesso\n");
                }
                break;
            case 2:
                printf("Digite o nome do aluno \n");
                scanf("%s", al_max.nome);
                printf("Digite o numero de matricula: \n");
                scanf("%d", &al_max.matricula);
                printf("\n");
                x = inserir_inicio(li,al_max);
                break;
            case 3:
                printf("Digite o nome do aluno \n");
                scanf("%s", al_max.nome);
                printf("Digite o numero de matricula: \n");
                scanf("%d", &al_max.matricula);
                printf("\n");
                x = inserir_fim(li,al_max);
                
                break;
            case 4:
                printf("digite a posicao procurada: \n");
                scanf("%d", &posicao);
                x = consulta_pos(li,posicao, &al_max);
                printf("%d", x);
                if(x == 1){
                    printf("\n");
                    printf("nome %s \n", al_max.nome);
                    printf("matricula %d \n", al_max.matricula);
                } else{
                    printf("ERRO! \n");
                }
                break;
            case 5:
                printf("digite o numero da matricula: \n");
                scanf("%d", &matricula);
                x = consulta_matri(li,matricula, &al_max);
                if(x == 1){
                    printf("\n");
                    printf("Nome: %s \n", al_max.nome);
                    printf("Nome: %d \n", al_max.matricula);
                    
                }else{
                    printf("\n");
                    printf("Lista não encontrada\n");
                }
                
                
                break;
            case 6:
                break;
               
            case 8:
                x = tamanho_lista(li);
                if(x == -1)
                    printf("lista sem tamanho \n");
                printf("%d", x);

        }
        

    }while(opt != 11);