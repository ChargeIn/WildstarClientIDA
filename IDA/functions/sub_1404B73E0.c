//----- (00000001404B73E0) ----------------------------------------------------
void __fastcall sub_1404B73E0(__int64 a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5)
{
	unsigned int v8; // r14d
	__int64 v9; // rbx
	__int64 v10; // rax
	char* v11; // rbx
	unsigned int* v12; // rdi
	__int64 v13; // rsi
	__int64 v14; // rax
	__int128 v15; // [rsp+30h] [rbp-C8h] BYREF
	unsigned int v16; // [rsp+40h] [rbp-B8h]
	unsigned int v17; // [rsp+44h] [rbp-B4h]
	int v18; // [rsp+48h] [rbp-B0h]
	int v19; // [rsp+50h] [rbp-A8h]
	char v20; // [rsp+54h] [rbp-A4h] BYREF

	v8 = sub_1404BC060(qword_140C659F0, a2);
	if ((unsigned int)sub_1404B72B0(a5, v8, a3, a4, a5))
	{
		v9 = sub_1405B1510(&qword_140C7DFB0);
		if (v9)
		{
			if (qword_140C7DFE0)
				a4 = 4;
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingBuildStarted", byte_1409F082C, a2 + 1);
			sub_1407E4830((int*)&v15, 0i64, 0x88ui64);
			v19 = 1;
			v16 = v8;
			v17 = a3;
			v18 = a4;
			v15 = *(_OWORD*)(v9 + 8);
			v10 = sub_140206C60(a3);
			if (v10)
			{
				v11 = &v20;
				v12 = (unsigned int*)(v10 + 72);
				v13 = 5i64;
				do
				{
					v14 = sub_140204EA0(*v12);
					if (v14)
					{
						*(_QWORD*)v11 = 0i64;
						*((_QWORD*)v11 + 1) = 0i64;
						*((_DWORD*)v11 + 4) = 0;
						*(_DWORD*)v11 = *(_DWORD*)(v14 + 8);
					}
					++v12;
					v11 += 20;
					--v13;
				} while (v13);
				sub_1403F4900(qword_140C65898, 0x510u, (__int64)&v15);
			}
		}
	}
}
// 1409F082C: using guessed type _BYTE byte_1409F082C[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

