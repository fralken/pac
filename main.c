/*
 * Pac
 *
 * Pac is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * Pac is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
 * St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Copyright (c) 2022 Francesco MDE aka fralken
 *
 */

#include <stdio.h>
#include "pac.h"

int main(int argc, char *argv[]) {

	pac_init();
	printf("myIpAddress:\n    %s\n", pac_get_myip());
	if (argc >= 2) {
		pac_parse_file(argv[1]);
	}
	if (argc >= 3) {
		const char *host = argv[2];
		const char *url = argc > 3 ? argv[3] : "";
		const char *proxy = pac_find_proxy(url, host);
		printf("FindProxyForURL:\n    %s\n", proxy);
	}
	pac_cleanup();
	return 0;
}
