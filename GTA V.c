// Simplified vehicle handling
void UpdateVehicle(Vehicle* vehicle) {
    float speed = CalculateSpeed(vehicle);
    ApplyPhysics(vehicle, speed);
    
    if(IsPlayerDriving(vehicle)) {
        HandlePlayerInput(vehicle);
        UpdatePoliceAttention(vehicle);
    }
}
