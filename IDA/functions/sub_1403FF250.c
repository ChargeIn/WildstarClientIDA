#include "../winhttp.h"

//----- (00000001403FF250) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403FF250(
	unsigned __int64 a1,
	unsigned __int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	unsigned __int64 v5; // r10
	__int64 v7; // r9
	unsigned __int64 v8; // rdx
	unsigned __int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rbx
	int v12; // eax
	__int64 v13; // r8
	int* v14; // rdx
	int v15; // eax
	void(__fastcall * **v16)(_QWORD); // rdx
	int v17; // xmm1_4
	int v18; // xmm0_4
	void(__fastcall * **v19)(_QWORD); // rcx
	int v20; // eax
	int v21; // eax
	int v22; // eax
	unsigned __int64 v23; // rdi
	unsigned __int64 i; // rbx
	__int64 v25; // rcx
	int v26; // [rsp+30h] [rbp-31h] BYREF
	__int64 v27; // [rsp+38h] [rbp-29h] BYREF
	__int128 v28; // [rsp+40h] [rbp-21h]
	__int64 v29; // [rsp+50h] [rbp-11h]
	int v30; // [rsp+58h] [rbp-9h]
	int v31; // [rsp+5Ch] [rbp-5h]
	int v32; // [rsp+60h] [rbp-1h]
	void(__fastcall * **v33)(_QWORD); // [rsp+68h] [rbp+7h]
	void(__fastcall * **v34)(_QWORD); // [rsp+70h] [rbp+Fh]
	int v35; // [rsp+78h] [rbp+17h]
	int v36; // [rsp+7Ch] [rbp+1Bh]
	int v37; // [rsp+80h] [rbp+1Fh]
	int v38; // [rsp+84h] [rbp+23h]
	int v39; // [rsp+88h] [rbp+27h]
	__int128 v40; // [rsp+90h] [rbp+2Fh]
	unsigned __int64 v42; // [rsp+C8h] [rbp+67h]
	__int64 v43; // [rsp+D8h] [rbp+77h]

	v42 = a2;
	v5 = a2;
	v7 = a1;
	v8 = (__int64)((unsigned __int128)((__int64)(a2 - a1) * (__int128)0x4924924924924925i64) >> 64) >> 5;
	result = v8 >> 63;
	if ((__int64)((v8 >> 63) + v8) > 16)
	{
		do
		{
			if (!a4)
				return sub_1403FFCB0(v7, v5, v5, v7, a5);
			v43 = a4 - 1;
			v10 = v5 - 112;
			v11 = 112 * ((__int64)(v5 - v7) / 112 / 2) + v7;
			if (a5(v7, v11))
			{
				if (!a5(v11, v10))
				{
					v11 = a1;
				LABEL_6:
					if (a5(v11, v10))
						v11 = v10;
				}
			}
			else
			{
				if (!a5(a1, v10))
					goto LABEL_6;
				v11 = a1;
			}
			v12 = *(_DWORD*)v11;
			v13 = *(_QWORD*)(v11 + 24);
			v14 = *(int**)(v11 + 16);
			v28 = 0i64;
			v26 = v12;
			v29 = 0i64;
			sub_14001C1B0(&v27, v14, v13);
			v15 = *(_DWORD*)(v11 + 72);
			v16 = *(void(__fastcall****)(_QWORD))(v11 + 56);
			v17 = *(_DWORD*)(v11 + 44);
			v30 = *(_DWORD*)(v11 + 40);
			v18 = *(_DWORD*)(v11 + 48);
			v31 = v17;
			v19 = *(void(__fastcall****)(_QWORD))(v11 + 64);
			v35 = v15;
			v20 = *(_DWORD*)(v11 + 76);
			v32 = v18;
			v40 = *(_OWORD*)(v11 + 96);
			v36 = v20;
			v21 = *(_DWORD*)(v11 + 80);
			v33 = v16;
			v37 = v21;
			v22 = *(_DWORD*)(v11 + 84);
			v34 = v19;
			v38 = v22;
			v39 = *(_DWORD*)(v11 + 88);
			if (v16)
			{
				(**v16)(v16);
				v19 = v34;
			}
			if (v19)
				(**v19)(v19);
			v23 = v42;
			for (i = a1; ; i += 112i64)
			{
				for (; a5(i, (__int64)&v26); i += 112i64)
					;
				for (v23 -= 112i64; a5((__int64)&v26, v23); v23 -= 112i64)
					;
				if (i >= v23)
					break;
				sub_1404000C0(i, v23);
			}
			sub_1403FF250(i, v42, 0, v43, (__int64)a5);
			v42 = i;
			if (qword_140C65898)
			{
				v25 = *(_QWORD*)(qword_140C65898 + 29504);
				if (v25)
					sub_1400EA3E0(v25, "MessageFinished", byte_1409EB834, &v26);
			}
			if (v33)
			{
				(*v33)[1](v33);
				v33 = 0i64;
			}
			if (v34)
			{
				(*v34)[1](v34);
				v34 = 0i64;
			}
			if ((_QWORD)v28)
				sub_14018B900(v28, 0);
			v7 = a1;
			v5 = i;
			a4 = v43;
			result = (unsigned __int64)((unsigned __int128)((__int64)(i - a1) * (__int128)0x4924924924924925i64) >> 64) >> 63;
		} while ((__int64)(i - a1) / 112 > 16);
	}
	return result;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

