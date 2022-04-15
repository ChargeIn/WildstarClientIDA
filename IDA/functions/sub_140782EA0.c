//----- (0000000140782EA0) ----------------------------------------------------
__int64 __fastcall sub_140782EA0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int v4; // eax
	_QWORD* v7; // r9
	__int64 v8; // rcx
	float v9; // xmm0_4
	__int64 v10; // r10
	__int64 v11; // r11
	int v12; // ebx
	__int64 result; // rax

	v4 = *(_DWORD*)(a3 + 24);
	*(_DWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = a4;
	*(_DWORD*)(a1 + 12) = v4;
	if (a4)
	{
		v7 = (_QWORD*)(a4 + 144);
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v7;
			v8 = a1 + 32;
			*(_QWORD*)v8 = *v7;
			*v7 = a1;
			if (*(_QWORD*)v8)
				*(_QWORD*)(*(_QWORD*)v8 + 24i64) = v8;
		}
	}
	*(_DWORD*)(a1 + 56) = *(_DWORD*)a3;
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a3 + 4);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 8);
	v9 = sub_1401C9770((unsigned __int16*)(a3 + 16));
	*(float*)(v10 + 68) = v9;
	v12 = a2 - *(_DWORD*)(v11 + 20);
	*(_DWORD*)(v10 + 72) = v12;
	result = 0i64;
	*(_DWORD*)(v10 + 76) = v12 + *(_DWORD*)(v11 + 12);
	return result;
}
// 140782F0C: variable 'v10' is possibly undefined
// 140782F12: variable 'v11' is possibly undefined

