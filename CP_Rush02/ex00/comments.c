/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comments.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:20:45 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/19 19:42:21 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*Hello ! Ceci est un fichier contenant tout les commentaires normalement dans les fichiers du Rush02
 * Ils sont listes par fichier et ligne, pour plus de clarte
 * ces commentaires contiennent generalement le processus de reflexion par lequel je suis passe
 * lors de l'ecriture du code.
 * Nous pensons avoir compris le fonctionnement global du Rush02, mais par manque de
 * temps, d'experience et de connaissance, nous n'avons pas pu terminer le projet.
 * Nous avons cependant beaucoup appris et progresse, donc nous ne voyons pas ce projet non termine comme une defaite !
 * Bonne lecture !
 * 
 * ft_error.c
 * ce fichier existe pour checker les erreurs du User Input, pour verifier que tout fonctionne correctement
 * avant le lancement du programme
 *
 * l-32 : currently dealing with everything in argv[1], might be too harsh
 * l-41 : might not need this one, but we never know
 * l-51 : if no arg, we can use Read
 * l-56 : if no arg, we can use Read here too
 *
 * ft_split_writer.c
 * ce fichier existe pour faire la transition entre les splits de argv[1] et le dictionnaire et afficher le resultat de la conversion
 *
 * l-44 : possible modif du dict pour afficher le " hundred and " pour l'affichage des centaines
 * l-44-46-48-51 : entre les +, nous etions cense avoir les variables faisant appel aux structures
 * pour recuperer les chiffres convertis en mots, pour les empiler dans l'output.
 * un malloc aurait probablement ete necessaire, nous ne sommes pas alle assez loin pour le verifier.
 *
 * main.c
 * le main etait cense appeler la plupart des fonctions, j'ai pense ajouter les free juste avant le dernier return,
 * malloc reste un peu obscur pour moi cependant.
 *
 * ft_parsing.c
 * ce fichier est cense trier le contenu du dictionnaire dans des splits : d'un cote les cles, de l'autre les valeurs en mots
 * le malloc pose souci, le reste du code fonctionne en theorie. le test n'a pas pu se faire faute de temps.
 *
 * parsedstr has, with hope, all the dictionnary in it ready to be parsed.
 * the problem is : how to parse ?
 * we get a key, and with that key, we get the corresponding value.
 * looks a bit like strstr, but without getting the needle back, only part of the haystack until a certain point.
 * that certain point will be decided thanks to the parsing.
 * still need to answer how to parse tho
 * dict looks like this -> [number/key][separator1][value][separator2]
 * the idea is to parse it like this :
 * [number/key]\n
 * [value]\n
 * [number/key]\n
 * [value]
 * [number/key] = 0 to 1*10^36
 * [separator1] = ' ' ':' ' '
 * [value] = "str"
 * [separator2] = '\n'
 * structure will be calling our tab all over again with correct indexes
 * going on a tab[2][41]
 *
 *
*/
