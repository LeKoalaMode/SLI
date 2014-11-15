void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(7,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100, 10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(koalaBot("Heyo."));
 delay(10000);
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum = x + y;
  return sum;
  
}

//write a function that multiplies two integers and returns the total
int multiply(int b, int y){
  int product = b * y;
  return product;
  
  
}

//write a function that divides the first parameter by the second
int divide(int r, int e){
  int quotient = r / e;
  return quotient;
  
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 4){
    response = "BRUH I GOTCHU. That's my favorite number!";
  }
  
  else{
    response = "Uh... That number is alright I guess...";
  }
  return response;
}

// chatbot

String koalaBot(String message){
  String response;
  
  if(message == "Who are you?"){
    response = "Your stalker";
  }
  else if(message == "Hello."){
    response = "Well this conversation just died.";
  }
  else if(message == "Hello Mr. Koala."){
    response = "Herro child I've been expecting you";
  }
  else if(message == "Oh my gosh you're so adorable!!!!"){
    response = "This is the reason why animals don't talk to humans..... Facepalm";
  }
  else if(message == "What's up?"){
    response = "The sky";
  }
  else if(message == "I don't like Koalas"){
    response = "I don't like you";
  }
  else if(message == "What is your name?"){
    response = "Why do you need to know? Isn't it obvious as it is?";
  }
  else if(message == "Make me a sandwich"){
    response = "Do it yourself child";
  }
  else if(message == "I love you"){
    response = "I hate you";
  }
  else if(message == "Want to be my friend?"){
    response = "No";
  }
    else if(message == "Why?"){
      response = "Because";
    }
    else if(message == "Because what?"){
     response = "Just because I can say because";
    }
   else if(message == "I hate you."){
     response = "You maaad bro? Lol.";
   }
   else if(message == "I applaud you."){
     response = "And I will high five you... In the face.";
   }
   else if(message == "You're weird."){
     response = "Thanks child.";
   }
   else if(message == "Stop calling me child!"){
     response = "Haha... That's funny. You're funny.";
   }
   else if(message == "How are you?"){
     response = "I want candy. What about you?";
   }
   else if(message == "I'm bored."){
     response = "That's greaaaat.";
   }
   else if(message == "Child."){
     response = "No. That's my thing. You can't pull it off correctly.";
   }
   else{
  response = "BRUH. DUN TALK TO ME I'M PWNING NOOBS IN PvP!";
   }
}
  





