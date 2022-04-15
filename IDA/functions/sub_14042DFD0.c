//----- (000000014042DFD0) ----------------------------------------------------
void __fastcall sub_14042DFD0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v3; // r8
	unsigned __int64 v4; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rcx
	int v11; // ebp
	__int64 v12; // rax
	__int64 v13; // rdx
	int v14; // [rsp+20h] [rbp-58h]
	__int64 v15[2]; // [rsp+30h] [rbp-48h] BYREF
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-38h] BYREF
	int v17; // [rsp+48h] [rbp-30h]
	_QWORD* v18; // [rsp+50h] [rbp-28h]
	int v19; // [rsp+58h] [rbp-20h]

	v2 = *(_QWORD**)(a1 + 400);
	v3 = v2[4];
	v16 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 112);
	v18 = v2;
	v19 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = 0i64;
	v11 = sub_1400578C0((__int64)v2);
	v17 = v11;
	if (a2[1])
	{
		do
		{
			v12 = sub_140432A10(v10, *(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * v9));
			if (v12 && *(_QWORD*)(v12 + 32))
			{
				v15[0] = (__int64)off_140B6FE30;
				v15[1] = v12;
				if ((unsigned int)sub_1404342E0(v2, (__int64)v15))
				{
					sub_1400FB470((__int64)&v16);
					v2 = v18;
					v18[2] -= 16i64;
				}
				v15[0] = (__int64)&off_140B567A8;
			}
			v9 = (unsigned int)(v9 + 1);
		} while ((unsigned int)v9 < a2[1]);
		v11 = v17;
	}
	v14 = v11;
	sub_1400EA3E0(a1, "InvokeSettlerBuild", byte_1409EDAAC, *a2, v14);
	if (v2)
		sub_1400579E0((__int64)v2, v13, v11);
}
// 14042E077: variable 'v10' is possibly undefined
// 14042E10C: variable 'v13' is possibly undefined
// 1409EDAAC: using guessed type _BYTE byte_1409EDAAC[4];
// 140B567A8: using guessed type __int64 (__fastcall *off_140B567A8)();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();

