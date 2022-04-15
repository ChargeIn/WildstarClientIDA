#include "../winhttp.h"

//----- (00000001408EA800) ----------------------------------------------------
__int64 __fastcall sub_1408EA800(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // ecx
	unsigned int v4; // eax
	unsigned int v5; // esi
	unsigned int v6; // esi
	int v7; // r8d
	int v8; // edi
	int i; // edx
	int v11; // eax
	__int64* v12; // rax
	__int64 v13; // rax
	char v14[40]; // [rsp+20h] [rbp-28h] BYREF

	v1 = *(_DWORD*)(a1 + 136);
	if (v1 >= 3)
	{
	LABEL_11:
		v7 = *(_DWORD*)(a1 + 312);
		v8 = 0;
		for (i = 0; v7; v7 &= v7 - 1)
			++i;
		LOBYTE(v8) = (unsigned int)sub_1408EB8A0(a1 + 144, i) != 0;
		return (unsigned int)(v8 + 1);
	}
	else
	{
		while (1)
		{
			v3 = *(_DWORD*)(a1 + 104);
			if (!v3)
				return 63i64;
			if (v1 < 2)
			{
				v4 = *(_DWORD*)(a1 + 384);
				v5 = *(_DWORD*)(a1 + 340);
				if (v4 < v5)
				{
					v6 = v5 - v4;
					if (v3 < v6)
						v6 = *(_DWORD*)(a1 + 104);
					sub_1407DB590((int*)(*(_QWORD*)(a1 + 376) + v4), *(int**)(a1 + 96), v6);
					*(_DWORD*)(a1 + 384) += v6;
					*(_QWORD*)(a1 + 96) += v6;
					*(_DWORD*)(a1 + 104) -= v6;
				}
				if (*(_DWORD*)(a1 + 384) == *(_DWORD*)(a1 + 340))
					break;
			}
			v1 = *(_DWORD*)(a1 + 136);
			if (v1 == 2)
				goto LABEL_15;
			if (v1 >= 3)
				goto LABEL_11;
		}
		*(_DWORD*)(a1 + 136) = 2;
	LABEL_15:
		v11 = sub_1408EACA0(a1, (__int64)v14);
		if (v11 == 46)
			return 63i64;
		if (v11 != 2 && v11 != 17 && v11 != 52)
		{
			v12 = (__int64*)sub_1408EBE00((__int64)&unk_140C63340, a1 + 128, *(_QWORD*)(a1 + 24), (__int64)v14);
			if (v12)
			{
				v13 = *v12;
				*(_DWORD*)(a1 + 136) = 3;
				*(_QWORD*)(a1 + 176) = v13;
				goto LABEL_11;
			}
		}
		return 2i64;
	}
}

