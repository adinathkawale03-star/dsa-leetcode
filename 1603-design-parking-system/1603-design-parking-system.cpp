class ParkingSystem {
private:
    int space[3]={0,0,0};
public:
    ParkingSystem(int big, int medium, int small) {
        space[0]=big;
        space[1]=medium;
        space[2]=small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(space[0]!=0){
                space[0]--;
                return true;
            }
            else{
                return false;
            }
        }
        if(carType==2){
            if(space[1]!=0){
                space[1]--;
                return true;
            }
            else{
                return false;
            }
        }
        if(carType==3){
            if(space[2]!=0){
                space[2]--;
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */