//----- (0000000140405E90) ----------------------------------------------------
void __fastcall sub_140405E90(__int64 a1, unsigned int* a2)
{
	__int64 v4; // r14
	int v5; // esi
	unsigned __int16* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // [rsp+38h] [rbp-49h] BYREF
	int v11; // [rsp+40h] [rbp-41h]
	__int64 v12; // [rsp+44h] [rbp-3Dh]
	__int64 v13; // [rsp+58h] [rbp-29h] BYREF
	__int64 v14; // [rsp+60h] [rbp-21h]
	unsigned __int16* v15; // [rsp+80h] [rbp-1h]
	unsigned __int16* v16; // [rsp+88h] [rbp+7h]
	__int64 v17; // [rsp+A0h] [rbp+1Fh]
	__int64 v18; // [rsp+C0h] [rbp+3Fh]

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4 && !*(_DWORD*)(v4 + 684) && dword_140C636A8 - dword_140C8A7B4 >= 0)
	{
		v5 = 0;
		v11 = 0;
		v10 = 0i64;
		v12 = 0i64;
		LODWORD(v10) = *a2;
		v11 = 0;
		HIDWORD(v10) = sub_1401AE6A0(0, 0xFFFF);
		sub_14040B680(&v13, a1, 0);
		v6 = v15;
		if (a2[4] && a2[6] && a2[5])
		{
			v7 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v7 && *(_DWORD*)(v7 + 264))
			{
				LODWORD(v12) = 1;
				v8 = *(_QWORD*)(qword_140C65898 + 25744);
				if (v8)
					v5 = *(_DWORD*)(v8 + 264);
				v11 = v5;
			}
			if (v15 != v16)
			{
				LODWORD(v12) = 1;
				v9 = sub_1403D9160(v7, v15);
				if (v9)
					v11 = *(_DWORD*)(v9 + 8);
			}
		}
		sub_1404739B0(v4, *a2, v11, HIDWORD(v10), v12, SHIDWORD(v12));
		sub_1403F4900(qword_140C65898, 0x37Eu, (__int64)&v10);
		dword_140C8A7B4 = dword_140C636A8 + 250;
		if (v18)
			sub_14018B900(v18, 0);
		if (v17)
			sub_14018B900(v17, 0);
		if (v6)
			sub_14018B900((__int64)v6, 0);
		if (v14)
			sub_14018B900(v14, 0);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8A7B4: using guessed type int dword_140C8A7B4;

