#include "../winhttp.h"

//----- (00000001401E4220) ----------------------------------------------------
void __fastcall sub_1401E4220(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v3; // rax
	__int64 v4; // rcx
	float v5; // xmm1_4
	int v6; // eax
	int v7[5]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+34h] [rbp-14h]

	v2 = *(_QWORD*)(a1 + 304);
	if (v2)
	{
		v3 = *(_QWORD*)(a1 + 2040);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 24);
			v5 = fabs(*(float*)(v4 + 256));
			if (v5 != 0.0)
			{
				v6 = *(_DWORD*)(v4 + 252);
			LABEL_7:
				v7[1] = 0;
				v7[3] = 0;
				*(float*)&v7[4] = v5;
				v7[0] = v6;
				v8 = 17i64;
				v7[2] = 1065353216;
				(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v2 + 600i64))(v2, a2, v7);
				return;
			}
		}
		else
		{
			v5 = 0.0;
		}
		v6 = 0;
		goto LABEL_7;
	}
}

