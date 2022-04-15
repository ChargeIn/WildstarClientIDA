//----- (000000014082BF30) ----------------------------------------------------
__int64 __fastcall sub_14082BF30(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // eax
	int v8; // ebx
	int v9[22]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v10; // [rsp+90h] [rbp+18h] BYREF

	v10 = a3;
	*(_DWORD*)(a3 + 24) = *(_DWORD*)(a1 + 192);
	*(_DWORD*)(a3 + 64) = a4;
	result = sub_14082BE40((__int64**)(a1 + 144), a2, &v10);
	if ((_DWORD)result != 1)
	{
		v6 = *(_QWORD*)(a3 + 8);
		v9[0] = 0;
		v7 = *(unsigned __int16*)(v6 + 60);
		if (v7 != 1027)
		{
			if (v7 != 1283)
			{
			LABEL_6:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(a3 + 56));
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16i64))(*(_QWORD*)(a3 + 8));
				v8 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a3 + 8i64))(a3, 0i64);
				return sub_140881720(v8, a3);
			}
			sub_1408570E0(v6);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a3 + 8) + 88i64))(*(_QWORD*)(a3 + 8), v9);
		goto LABEL_6;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082BF30: using guessed type int var_58[22];

