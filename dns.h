/*	$OpenBSD: dns.h,v 1.1 2003/05/14 18:16:20 jakob Exp $	*/

/*
 * Copyright (c) 2003 Wesley Griffin. All rights reserved.
 * Copyright (c) 2003 Jakob Schlyter. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "includes.h"

#ifdef DNS
#ifndef DNS_H
#define DNS_H

enum dns_types {
	DNS_KEY_RESERVED,
	DNS_KEY_RSA,
	DNS_KEY_DSA
};

enum dns_hashes {
	DNS_HASH_RESERVED,
	DNS_HASH_SHA1
};

#define DNS_RDATACLASS_IN	1
#define DNS_RDATATYPE_SSHFP	44

#define DNS_VERIFY_FAILED	-1
#define DNS_VERIFY_OK		0
#define DNS_VERIFY_ERROR	1

int	verify_host_key_dns(const char *, struct sockaddr *, Key *);
int	export_dns_rr(const char *, Key *, FILE *, int);

#endif /* DNS_H */
#endif /* DNS */
