#include "../winhttp.h"

//----- (00000001403FFCB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403FFCB0(
	__int64 a1,
	unsigned __int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	unsigned __int64 v8; // rbx
	int v9; // eax
	__int64 v10; // r8
	int* v11; // rdx
	int v12; // eax
	void(__fastcall * **v13)(_QWORD); // rdx
	int v14; // xmm1_4
	int v15; // xmm0_4
	void(__fastcall * **v16)(_QWORD); // rcx
	int v17; // eax
	int v18; // eax
	int v19; // eax
	__int64 v20; // rcx
	int v22; // [rsp+30h] [rbp-41h] BYREF
	__int64 v23; // [rsp+38h] [rbp-39h] BYREF
	__int128 v24; // [rsp+40h] [rbp-31h]
	__int64 v25; // [rsp+50h] [rbp-21h]
	int v26; // [rsp+58h] [rbp-19h]
	int v27; // [rsp+5Ch] [rbp-15h]
	int v28; // [rsp+60h] [rbp-11h]
	void(__fastcall * **v29)(_QWORD); // [rsp+68h] [rbp-9h]
	void(__fastcall * **v30)(_QWORD); // [rsp+70h] [rbp-1h]
	int v31; // [rsp+78h] [rbp+7h]
	int v32; // [rsp+7Ch] [rbp+Bh]
	int v33; // [rsp+80h] [rbp+Fh]
	int v34; // [rsp+84h] [rbp+13h]
	int v35; // [rsp+88h] [rbp+17h]
	__int128 v36; // [rsp+90h] [rbp+1Fh]

	sub_1404002B0(a1, a2, a5);
	if (a2 < a3)
	{
		v8 = a2 + 16;
		do
		{
			if (a5(v8 - 16, a1))
			{
				v9 = *(_DWORD*)(v8 - 16);
				v10 = *(_QWORD*)(v8 + 8);
				v11 = *(int**)v8;
				v24 = 0i64;
				v22 = v9;
				v25 = 0i64;
				sub_14001C1B0(&v23, v11, v10);
				v12 = *(_DWORD*)(v8 + 56);
				v13 = *(void(__fastcall****)(_QWORD))(v8 + 40);
				v14 = *(_DWORD*)(v8 + 28);
				v26 = *(_DWORD*)(v8 + 24);
				v15 = *(_DWORD*)(v8 + 32);
				v27 = v14;
				v16 = *(void(__fastcall****)(_QWORD))(v8 + 48);
				v31 = v12;
				v17 = *(_DWORD*)(v8 + 60);
				v28 = v15;
				v36 = *(_OWORD*)(v8 + 80);
				v32 = v17;
				v18 = *(_DWORD*)(v8 + 64);
				v29 = v13;
				v33 = v18;
				v19 = *(_DWORD*)(v8 + 68);
				v30 = v16;
				v34 = v19;
				v35 = *(_DWORD*)(v8 + 72);
				if (v13)
				{
					(**v13)(v13);
					v16 = v30;
				}
				if (v16)
					(**v16)(v16);
				sub_140474EC0(v8 - 16, a1);
				sub_1404004E0(a1, 0i64, (__int64)(a2 - a1) / 112, (__int64)&v22, a5);
				if (qword_140C65898)
				{
					v20 = *(_QWORD*)(qword_140C65898 + 29504);
					if (v20)
						Apollo_LUAEvent(v20, "MessageFinished", byte_1409EB834, &v22);
				}
				if (v29)
				{
					(*v29)[1](v29);
					v29 = 0i64;
				}
				if (v30)
				{
					(*v30)[1](v30);
					v30 = 0i64;
				}
				if ((_QWORD)v24)
					sub_14018B900(v24, 0);
			}
			v8 += 112i64;
		} while (v8 - 16 < a3);
	}
	return sub_140400010(a1, a2, a5);
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

