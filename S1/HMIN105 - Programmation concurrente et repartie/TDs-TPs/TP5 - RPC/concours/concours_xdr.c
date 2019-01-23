/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "concours.h"

bool_t
xdr_client (XDR *xdrs, client *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, STR_MAX_LEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, STR_MAX_LEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->adresse, STR_MAX_LEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->age))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_liste_clients (XDR *xdrs, liste_clients *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->liste_clients_val, (u_int *) &objp->liste_clients_len, ~0,
		sizeof (client), (xdrproc_t) xdr_client))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ACTION_CLIENT (XDR *xdrs, ACTION_CLIENT *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}