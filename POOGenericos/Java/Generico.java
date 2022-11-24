package poogenericos;

public class Generico<E> implements Gerador<E> {
    private E ent;
    
    @Override
    public E getEnt() {
        return this.ent;
    }
    
    @Override
    public void setEnt(E ent) {
        this.ent = ent;
    }
}
