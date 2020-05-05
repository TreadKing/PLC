
void Id(){

}

void expr(){
    term();
    while(nextToken == PLUS_OP){
        lex();
        expr();
    }
}

void term(){
    factor();
    while(nextToken == MULT_OP){
        lex();
        term();
    }
}

void factor(){
    if (nextToken == LEFT_PAREN) {
		 lex();
		 expr();
		 if (nextToken == RIGHT_PAREN)
		 	lex();
		 else
		 	error();
    }
    else{
        Id();
        lex();
        if(nextToken == PLUSPLUS || nextToken == MINUSMINUS){
            lex();
        }
    }
}

void bool_expr(){
    bool_term();
    while(nextToken == OR){
        lex();
        bool_expr();
    }
}

void bool_term(){
    bool_factor();
    while(nestToken == AND){
        lex();
        bool_factor();
    }
}

void bool_factor(){
    if(nextToken == NOT){
        lex();
        bool_factor();
    }
    else if(nextToken == LEFT_PAREN) {
		 lex();
		 bool_expr();
		 if (nextToken == RIGHT_PAREN)
		 	lex();
		 else
		 	error();
    }
    else if(nestToekn == ID){
        lex();
        id();
    }
    else{


    }
}

void rel_expr(){
    id();
    while (nextToken == LESS_THAN_OP || nextToken == LESS_THAN_EQUALS_OP || nextToken == GREATER_THAN_OP || nextToken == GREATER_THAN_EQUALS_OP || nextToken == NOT_EQUALS_OP || nextToken == EQUALS_EQUALS_OP){
        lex();
        id();
    }
}