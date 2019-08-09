package sw;

import static spark.Spark.*;

public class MainServer {

    final static Model model = new Model();

    public static void main(String[] args) {

        // Get port config of heroku on environment variable
        ProcessBuilder process = new ProcessBuilder();
        Integer port;
        if (process.environment().get("PORT") != null) {
            port = Integer.parseInt(process.environment().get("PORT"));
        } else {
            port = 8081;
        }
        port(port);

        //Servir conteudo html, css e javascript
        staticFileLocation("/static");

//        model.adicionarPersonagem(new Personagem("Negro", "Darth Vader", "Humano", new Planeta("Tatooine", "Sea of Dune e Judland Wastes")));
//        model.adicionarPersonagem(new Personagem("Luz", "Luke Skywalker", "Humano", new Planeta("Tatooine", "Sea of Dune e Judland Wastes")));
//        model.adicionarPersonagem(new Personagem("Luz", "R2D2", "Robótico", new Planeta("Naboo", "Orla Média")));
//        model.adicionarPersonagem(new Personagem("Luz", "Leia Amidala Skywalker", "Humano", new Planeta("Alderaan", "Mundos do Núcleo")));

        Controller controller = new Controller(model);

        controller.buscarPersonagemNome();
        controller.buscarPersonagemLadoForca();
        controller.buscarPersonagemPlaneta();
        controller.buscarPersonagemTudo();
        controller.adicionarPersonagem();
        controller.buscarTodosPersonagens();
        controller.excluirPersonagem();
        controller.buscarUsuario();
        controller.cadastrarusuario();
        controller.listarUsuarios();
        controller.editarPersonagem();
    }
}


















