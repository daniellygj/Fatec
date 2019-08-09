package sw;


public class Usuario {
    private String nick;
    private String senha;
    private int id;

    public Usuario(String nick, String senha) {
        this.nick = nick;
        this.senha = senha;
        this.id = 0;
    }

    public String getNick() {
        return nick;
    }

    public void setNick(String nick) {
        this.nick = nick;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}
