//----- (00000001403FFE90) ----------------------------------------------------
__int64 __fastcall sub_1403FFE90(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned __int8(__fastcall* a4)(__int64, _DWORD*))
{
	__int64 v6; // rbx
	int v7; // eax
	__int64 v8; // r8
	int* v9; // rdx
	int v10; // eax
	void(__fastcall * **v11)(_QWORD); // rdx
	int v12; // xmm1_4
	int v13; // xmm0_4
	void(__fastcall * **v14)(_QWORD); // rcx
	int v15; // eax
	int v16; // eax
	int v17; // eax
	__int64 v18; // rcx
	__int64 result; // rax
	int v20; // [rsp+28h] [rbp-29h] BYREF
	__int64 v21; // [rsp+30h] [rbp-21h] BYREF
	__int128 v22; // [rsp+38h] [rbp-19h]
	__int64 v23; // [rsp+48h] [rbp-9h]
	int v24; // [rsp+50h] [rbp-1h]
	int v25; // [rsp+54h] [rbp+3h]
	int v26; // [rsp+58h] [rbp+7h]
	void(__fastcall * **v27)(_QWORD); // [rsp+60h] [rbp+Fh]
	void(__fastcall * **v28)(_QWORD); // [rsp+68h] [rbp+17h]
	int v29; // [rsp+70h] [rbp+1Fh]
	int v30; // [rsp+74h] [rbp+23h]
	int v31; // [rsp+78h] [rbp+27h]
	int v32; // [rsp+7Ch] [rbp+2Bh]
	int v33; // [rsp+80h] [rbp+2Fh]
	__int128 v34; // [rsp+88h] [rbp+37h]

	if (a1 != a2)
	{
		v6 = a1 + 16;
		do
		{
			v7 = *(_DWORD*)(v6 - 16);
			v8 = *(_QWORD*)(v6 + 8);
			v9 = *(int**)v6;
			v22 = 0i64;
			v20 = v7;
			v23 = 0i64;
			sub_14001C1B0(&v21, v9, v8);
			v10 = *(_DWORD*)(v6 + 56);
			v11 = *(void(__fastcall****)(_QWORD))(v6 + 40);
			v12 = *(_DWORD*)(v6 + 28);
			v24 = *(_DWORD*)(v6 + 24);
			v13 = *(_DWORD*)(v6 + 32);
			v25 = v12;
			v14 = *(void(__fastcall****)(_QWORD))(v6 + 48);
			v29 = v10;
			v15 = *(_DWORD*)(v6 + 60);
			v26 = v13;
			v34 = *(_OWORD*)(v6 + 80);
			v30 = v15;
			v16 = *(_DWORD*)(v6 + 64);
			v27 = v11;
			v31 = v16;
			v17 = *(_DWORD*)(v6 + 68);
			v28 = v14;
			v32 = v17;
			v33 = *(_DWORD*)(v6 + 72);
			if (v11)
			{
				(**v11)(v11);
				v14 = v28;
			}
			if (v14)
				(**v14)(v14);
			sub_140400180(v6 - 16, (__int64)&v20, a4);
			if (qword_140C65898)
			{
				v18 = *(_QWORD*)(qword_140C65898 + 29504);
				if (v18)
					sub_1400EA3E0(v18, "MessageFinished", byte_1409EB834, &v20);
			}
			if (v27)
			{
				(*v27)[1](v27);
				v27 = 0i64;
			}
			if (v28)
			{
				(*v28)[1](v28);
				v28 = 0i64;
			}
			if ((_QWORD)v22)
				sub_14018B900(v22, 0);
			v6 += 112i64;
			result = v6 - 16;
		} while (v6 - 16 != a2);
	}
	return result;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

