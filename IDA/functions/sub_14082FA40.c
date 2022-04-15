//----- (000000014082FA40) ----------------------------------------------------
__int64 __fastcall sub_14082FA40(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	int v5; // eax
	int v6; // ebx
	int v7[22]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v8; // [rsp+88h] [rbp+10h] BYREF

	v8 = a2;
	*(_DWORD*)(a2 + 16) += *(_DWORD*)(a1 + 192) - *(_DWORD*)(a2 + 24);
	result = sub_14082BE40((__int64**)(a1 + 96), *(_DWORD*)(a2 + 16), &v8);
	if ((_DWORD)result != 1)
	{
		v4 = *(_QWORD*)(a2 + 8);
		v7[0] = 0;
		v5 = *(unsigned __int16*)(v4 + 60);
		if (v5 != 1027)
		{
			if (v5 != 1283)
			{
			LABEL_6:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(a2 + 56));
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16i64))(*(_QWORD*)(a2 + 8));
				v6 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
				return sub_140881720(v6, a2);
			}
			sub_1408570E0(v4);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a2 + 8) + 88i64))(*(_QWORD*)(a2 + 8), v7);
		goto LABEL_6;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082FA40: using guessed type int var_58[22];

