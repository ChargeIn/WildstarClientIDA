#include "../winhttp.h"

//----- (00000001404025D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1404025D0(__int64 a1, __int64* a2)
{
	__int64 v2; // r9
	unsigned __int64 v3; // r8
	int v4; // eax
	__int64 v5; // rax

	v2 = 0i64;
	v3 = 0i64;
	while (2)
	{
		v4 = *(unsigned __int16*)(a1 + 2 * v3++);
		switch (v4)
		{
		case '0':
			v5 = 0i64;
			goto LABEL_19;
		case '1':
			v5 = 1i64;
			goto LABEL_19;
		case '2':
			v5 = 2i64;
			goto LABEL_19;
		case '3':
			v5 = 3i64;
			goto LABEL_19;
		case '4':
			v5 = 4i64;
			goto LABEL_19;
		case '5':
			v5 = 5i64;
			goto LABEL_19;
		case '6':
			v5 = 6i64;
			goto LABEL_19;
		case '7':
			v5 = 7i64;
			goto LABEL_19;
		case '8':
			v5 = 8i64;
			goto LABEL_19;
		case '9':
			v5 = 9i64;
			goto LABEL_19;
		case 'A':
		case 'a':
			v5 = 10i64;
			goto LABEL_19;
		case 'B':
		case 'b':
			v5 = 11i64;
			goto LABEL_19;
		case 'C':
		case 'c':
			v5 = 12i64;
			goto LABEL_19;
		case 'D':
		case 'd':
			v5 = 13i64;
			goto LABEL_19;
		case 'E':
		case 'e':
			v5 = 14i64;
			goto LABEL_19;
		case 'F':
		case 'f':
			v5 = 15i64;
		LABEL_19:
			v2 = v5 | (16 * v2);
			if (v3 < 0x10)
				continue;
			if (a2)
				*a2 = v2;
			return v3;
		default:
			if (a2)
				*a2 = v2;
			return v3 - 1;
		}
	}
}

