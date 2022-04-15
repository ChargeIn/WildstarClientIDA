#include "../winhttp.h"

//----- (00000001401C89C0) ----------------------------------------------------
void __fastcall sub_1401C89C0(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v7; // rbp
	unsigned int v8; // eax

	if (*(_DWORD*)(a3 + 48))
	{
		v8 = -1608318974;
	}
	else
	{
		v7 = *(_QWORD*)(a2 + 8);
		*(_QWORD*)(a2 + 8) = a3;
		switch (*(_DWORD*)(a3 + 104))
		{
		case 0:
			*(_QWORD*)(a2 + 8) = v7;
			v8 = 0;
			break;
		case 1:
			(*(void(__fastcall**)(_QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112));
			*(_QWORD*)(a2 + 8) = v7;
			v8 = 0;
			break;
		case 2:
			v8 = (*(__int64(__fastcall**)(_QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112));
			*(_QWORD*)(a2 + 8) = v7;
			break;
		case 3:
			(*(void(__fastcall**)(_QWORD, _QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112), *(_QWORD*)(a3 + 128));
			*(_QWORD*)(a2 + 8) = v7;
			v8 = 0;
			break;
		case 4:
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112), *(_QWORD*)(a3 + 128));
			*(_QWORD*)(a2 + 8) = v7;
			break;
		case 5:
			(*(void(__fastcall**)(_QWORD, _QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112), a4);
			*(_QWORD*)(a2 + 8) = v7;
			v8 = 0;
			break;
		case 6:
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112), a4);
			*(_QWORD*)(a2 + 8) = v7;
			break;
		case 7:
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(a3 + 120))(*(_QWORD*)(a3 + 112), *(_QWORD*)(a3 + 128), a4);
			*(_QWORD*)(a2 + 8) = v7;
			v8 = 0;
			break;
		case 8:
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(a3 + 120))(
				*(_QWORD*)(a3 + 112),
				*(_QWORD*)(a3 + 128),
				a4);
			*(_QWORD*)(a2 + 8) = v7;
			break;
		default:
			v8 = a1;
			*(_QWORD*)(a2 + 8) = v7;
			break;
		}
	}
	sub_14019E200(a3, v8, a4);
}

