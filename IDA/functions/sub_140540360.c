#include "../winhttp.h"

//----- (0000000140540360) ----------------------------------------------------
__int64 __fastcall sub_140540360(_QWORD* a1, int a2)
{
	_QWORD* v5; // rbx
	_QWORD* v6; // rbx
	_QWORD* v7; // rbx
	__int64 v8; // rax

	if (!a2)
		return 0i64;
	v5 = (_QWORD*)a1[69];
	if (v5)
	{
		while ((*(unsigned int(__fastcall**)(_QWORD*))(*v5 + 56i64))(v5) != a2)
		{
			v5 = (_QWORD*)v5[2];
			if (!v5)
				goto LABEL_6;
		}
	}
	else
	{
	LABEL_6:
		v6 = (_QWORD*)a1[67];
		if (v6)
		{
			while ((*(unsigned int(__fastcall**)(_QWORD*))(*v6 + 56i64))(v6) != a2)
			{
				v6 = (_QWORD*)v6[2];
				if (!v6)
					goto LABEL_9;
			}
		}
		else
		{
		LABEL_9:
			v7 = (_QWORD*)a1[70];
			if (v7)
			{
				while ((*(unsigned int(__fastcall**)(_QWORD*))(*v7 + 56i64))(v7) != a2)
				{
					v7 = (_QWORD*)v7[2];
					if (!v7)
						goto LABEL_12;
				}
			}
			else
			{
			LABEL_12:
				v8 = a1[71];
				if (!v8)
					return 0i64;
				while (*(_DWORD*)(v8 + 44) != a2)
				{
					v8 = *(_QWORD*)(v8 + 32);
					if (!v8)
						return 0i64;
				}
			}
		}
	}
	return 1i64;
}

