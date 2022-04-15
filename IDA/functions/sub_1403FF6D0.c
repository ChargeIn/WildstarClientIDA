//----- (00000001403FF6D0) ----------------------------------------------------
void __fastcall sub_1403FF6D0(__int64 a1, int* a2, unsigned __int8(__fastcall* a3)(__int64, _DWORD*))
{
	int* v3; // rbx
	__int64 v7; // rdi
	int v8; // eax
	__int64 v9; // r8
	int* v10; // rdx
	int v11; // eax
	void(__fastcall * **v12)(_QWORD); // rdx
	int v13; // xmm1_4
	int v14; // xmm0_4
	void(__fastcall * **v15)(_QWORD); // rcx
	int v16; // eax
	int v17; // eax
	int v18; // eax
	__int64 v19; // rcx
	int v20; // [rsp+30h] [rbp-29h] BYREF
	__int64 v21; // [rsp+38h] [rbp-21h] BYREF
	__int128 v22; // [rsp+40h] [rbp-19h]
	__int64 v23; // [rsp+50h] [rbp-9h]
	int v24; // [rsp+58h] [rbp-1h]
	int v25; // [rsp+5Ch] [rbp+3h]
	int v26; // [rsp+60h] [rbp+7h]
	void(__fastcall * **v27)(_QWORD); // [rsp+68h] [rbp+Fh]
	void(__fastcall * **v28)(_QWORD); // [rsp+70h] [rbp+17h]
	int v29; // [rsp+78h] [rbp+1Fh]
	int v30; // [rsp+7Ch] [rbp+23h]
	int v31; // [rsp+80h] [rbp+27h]
	int v32; // [rsp+84h] [rbp+2Bh]
	int v33; // [rsp+88h] [rbp+2Fh]
	__int128 v34; // [rsp+90h] [rbp+37h]

	if ((int*)a1 != a2)
	{
		v3 = (int*)(a1 + 112);
		if ((int*)(a1 + 112) != a2)
		{
			v7 = a1 + 128;
			do
			{
				v8 = *v3;
				v9 = *(_QWORD*)(v7 + 8);
				v10 = *(int**)v7;
				v22 = 0i64;
				v20 = v8;
				v23 = 0i64;
				sub_14001C1B0(&v21, v10, v9);
				v11 = *(_DWORD*)(v7 + 56);
				v12 = *(void(__fastcall****)(_QWORD))(v7 + 40);
				v13 = *(_DWORD*)(v7 + 28);
				v24 = *(_DWORD*)(v7 + 24);
				v14 = *(_DWORD*)(v7 + 32);
				v25 = v13;
				v15 = *(void(__fastcall****)(_QWORD))(v7 + 48);
				v29 = v11;
				v16 = *(_DWORD*)(v7 + 60);
				v26 = v14;
				v34 = *(_OWORD*)(v7 + 80);
				v30 = v16;
				v17 = *(_DWORD*)(v7 + 64);
				v27 = v12;
				v31 = v17;
				v18 = *(_DWORD*)(v7 + 68);
				v28 = v15;
				v32 = v18;
				v33 = *(_DWORD*)(v7 + 72);
				if (v12)
				{
					(**v12)(v12);
					v15 = v28;
				}
				if (v15)
					(**v15)(v15);
				if (a3((__int64)&v20, (_DWORD*)a1))
				{
					sub_1403FFA80(a1, (__int64)v3, v7 + 96);
					sub_140474EC0(a1, (__int64)&v20);
				}
				else
				{
					sub_140400180((__int64)v3, (__int64)&v20, a3);
				}
				if (qword_140C65898)
				{
					v19 = *(_QWORD*)(qword_140C65898 + 29504);
					if (v19)
						sub_1400EA3E0(v19, "MessageFinished", byte_1409EB834, &v20);
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
				v3 += 28;
				v7 += 112i64;
			} while (v3 != a2);
		}
	}
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65898: using guessed type __int64 qword_140C65898;

