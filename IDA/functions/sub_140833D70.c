#include "../winhttp.h"

//----- (0000000140833D70) ----------------------------------------------------
__int64 __fastcall sub_140833D70(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // r8d
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rax

	result = sub_140848030(a2, a1);
	v5 = result;
	if ((_DWORD)result != 63)
	{
		v6 = 0i64;
		v7 = qword_140C62418;
		if (qword_140C62418)
		{
			while (v7 != a2)
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 8);
				if (!v7)
					goto LABEL_13;
			}
			if (v7)
			{
				if (v7 == qword_140C62418)
					qword_140C62418 = *(_QWORD*)(v7 + 8);
				else
					*(_QWORD*)(v6 + 8) = *(_QWORD*)(v7 + 8);
				v8 = qword_140C62420;
				if (v7 == qword_140C62420)
					v8 = v6;
				qword_140C62420 = v8;
			}
		}
	LABEL_13:
		if (v5 == 1 && (v9 = sub_140832DE0(a1)) != 0 && (unsigned int)sub_140846F60(a2) == 1)
		{
			*(_QWORD*)(a2 + 8) = 0i64;
			v10 = *(_QWORD*)(v9 + 16);
			if (v10)
				*(_QWORD*)(v10 + 8) = a2;
			else
				*(_QWORD*)(v9 + 8) = a2;
			++* (_DWORD*)v9;
			*(_QWORD*)(v9 + 16) = a2;
			sub_140862BE0(v9 + 32);
			if ((*(_BYTE*)(a1 + 384) & 1) != 0)
				*(_QWORD*)(a2 + 32) = sub_140832C00(v9);
			return 1i64;
		}
		else
		{
			sub_140831560(a2);
			return 2i64;
		}
	}
	return result;
}
// 140C62418: using guessed type __int64 qword_140C62418;
// 140C62420: using guessed type __int64 qword_140C62420;

