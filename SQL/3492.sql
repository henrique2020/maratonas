-- Problema: 3492 - Ranking turismo CE | Resposta: Accepted
-- Linguagem: PostgreSQL [+0s]         | Tempo: 0.004s

WITH regras AS (
    SELECT 
        c.nome_cidade, 
        c.regiao, 
        COUNT(DISTINCT pt.ponto_id) AS qtde_pontos, 
        ROUND(AVG(a.nota), 2) media_avaliacoes
    FROM Cidades c
    JOIN PontosTuristicos pt ON pt.cidade_id = c.cidade_id
    LEFT JOIN Avaliacoes a ON a.ponto_id = pt.ponto_id
    GROUP BY c.nome_cidade, c.regiao
    HAVING COUNT(DISTINCT pt.ponto_id)  >= 2 
)

SELECT nome_cidade, regiao, qtde_pontos, media_avaliacoes, RANK() OVER (PARTITION BY regiao ORDER BY media_avaliacoes DESC) AS ranking_regional
FROM regras
ORDER BY qtde_pontos DESC, regiao, media_avaliacoes DESC
