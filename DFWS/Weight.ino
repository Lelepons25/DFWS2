
//Weighing Scale
int computeWeight(float w) {


    if (w < 0)
    {
        w = w * (-1);
    }

    DisplayWeight(w);

    //delay(200);

    if (w >= 10000)
    {
        w = 0;
        OverWeight();
        delay(200);
    }

}

void DisplayWeight(int weight) {
    tft.fillRect(TEXT_X, TEXT_Y, TEXT_W, TEXT_H, ILI9341_BLACK);
    tft.drawRect(TEXT_X, TEXT_Y, TEXT_W, TEXT_H, ILI9341_DARKGREY); //Display Weight //create a function here
    tft.setCursor(20, 30);
    tft.setTextColor(ILI9341_WHITE);
    tft.setTextSize(4);
    tft.print(weight);
    
}

void OverWeight() {
    tft.fillRect(TEXT_X, TEXT_Y, TEXT_W, TEXT_H, ILI9341_DARKGREY);
    tft.drawRect(TEXT_X, TEXT_Y, TEXT_W, TEXT_H, ILI9341_DARKGREY); //Display Weight //create a function here
    tft.setCursor(20, 30);
    tft.setTextColor(ILI9341_RED);
    tft.setTextSize(3);
    tft.print("Over Loaded");
}
