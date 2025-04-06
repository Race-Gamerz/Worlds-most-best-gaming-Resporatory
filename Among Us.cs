// Simplified task completion check
public class Task {
    public string TaskName;
    public bool IsComplete;
    
    public void CompleteTask(Player player) {
        IsComplete = true;
        player.TasksCompleted++;
        GameManager.CheckAllTasksComplete();
    }
}
