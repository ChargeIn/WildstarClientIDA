#include "../winhttp.h"

//----- (0000000140177180) ----------------------------------------------------
void __fastcall sub_140177180(char* a1, int a2, __int64 a3, _BYTE* a4, __int64 a5)
{
	__int64 v6; // rcx
	char v7; // dl
	__int64 v8; // rbx
	void* v9; // rax
	__int64 v10; // rax

	if (a2 == 36)
	{
		if (a3 != *((_QWORD*)a1 + 129))
			return;
		(*(void(__fastcall**)(char*))(*(_QWORD*)a1 + 432i64))(a1);
		v6 = *((_QWORD*)a1 + 130);
		v7 = 1;
		goto LABEL_12;
	}
	if (a2 == 37)
	{
		if (a3 != *((_QWORD*)a1 + 129))
			return;
		v6 = *((_QWORD*)a1 + 130);
		goto LABEL_11;
	}
	if (a2 == 45 && a3 == *((_QWORD*)a1 + 130))
	{
		sub_1400D3C30((__int64)a1, 0x31u, 0i64, a1, a4, a5);
		v8 = *(_QWORD*)a1;
		v9 = sub_1401774A0((__int64)a1, *(_DWORD*)(*((_QWORD*)a1 + 130) + 1032i64));
		(*(void(__fastcall**)(char*, void*))(v8 + 80))(a1, v9);
		sub_1400D42F0(*((_QWORD*)a1 + 130), 0, 0, 4.0);
		v10 = *((_QWORD*)a1 + 129);
		*(_BYTE*)(v10 + 1436) &= ~0x40u;
		v6 = *(_QWORD*)(v10 + 1560);
		if (v6)
		{
			if ((*(_BYTE*)(v6 + 28) & 1) != 0)
			{
			LABEL_11:
				v7 = 0;
			LABEL_12:
				sub_1400D42F0(v6, v7, 0, 4.0);
			}
		}
	}
}

