public class Block {
    private String type;
    private int durability;
    
    public Block(String type) {
        this.type = type;
        this.durability = 100;
    }
    
    public void placeBlock(World world, int x, int y, int z) {
        world.setBlockAt(x, y, z, this);
        System.out.println("Placed " + type + " block at " + x + "," + y + "," + z);
    }
}
