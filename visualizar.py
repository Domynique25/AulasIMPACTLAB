from PIL import Image
import os

# Verificar se arquivo existe
arquivo = './images/Imagem.ppm'

if os.path.exists(arquivo):
    print("Arquivo encontrado! Visualização com ")
    
    # Abrir e mostrar a imagem
    img = Image.open(arquivo)
    img.show()
    
    # Informações da imagem
    print(f"Tamanho: {img.size}")
    print(f"Modo: {img.mode}")
    
    # Opcional: Salvar como PNG
    img.save('./images/Imagem.png')
    print("Imagem salva!")
    
else:
    print("Arquivo Imagem.ppm não encontrado!")
