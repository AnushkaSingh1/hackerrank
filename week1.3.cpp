string timeConversion(string s) {
    
    // Get hour
    int hh = ((s[0]-'0') * 10) + (s[1]-'0');
    
    // If hour is 12, convert to 0
    if (hh == 12) {
        hh = 0;
    }
    
    // If the format is PM, add 12 hours
    if (s[8] == 'P') {
        hh += 12;
    }
    
    // Change the hours in <s> to the current hour
    s[0] = (char)((hh/10) + '0');
    s[1] = (char)((hh%10) + '0');
    
    // Remove last two characters (PM or AM)
    s.pop_back(); s.pop_back();
    
    return s;
}







string timeConversion(string s) {
    string num = s.substr(0, 2);
    string ampm = s.substr(8, 2);
    
    if (ampm == "AM" && num == "12"){
            num = "00";
    }
    if(ampm == "PM" && num != "12"){
        num = to_string(stoi(num) + 12);
    }
    
    return num + s.substr(2, 6);
}
