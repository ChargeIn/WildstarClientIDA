//----- (000000014082C1A0) ----------------------------------------------------
__int64 __fastcall sub_14082C1A0(__int64 a1, int a2, int a3)
{
	_QWORD* i; // rax
	__int64 v7; // r9
	__int128 v8; // rdi
	__int64 v9; // r8
	__int64 v10; // rax
	__int64 v11; // rax
	__int128 v13; // [rsp+20h] [rbp-28h]

	for (i = *(_QWORD**)(a1 + 144); i; i = (_QWORD*)*i)
	{
		v7 = i[2];
		if (a2 == *(_DWORD*)(*(_QWORD*)(v7 + 8) + 24i64) && (!a3 || *(_DWORD*)(v7 + 56) == a3))
			++* (_DWORD*)(v7 + 64);
	}
	v8 = *(unsigned __int64*)(a1 + 96);
	while ((_QWORD)v8)
	{
		v9 = *(_QWORD*)(v8 + 16);
		v10 = *(_QWORD*)(v9 + 8);
		if (a2 == *(_DWORD*)(v10 + 24) && (!a3 || *(_DWORD*)(v9 + 56) == a3))
		{
			sub_14082BF30(a1, *(_DWORD*)(v10 + 56), v9, 0);
			v11 = *(_QWORD*)v8;
			*((_QWORD*)&v13 + 1) = *((_QWORD*)&v8 + 1);
			*(_QWORD*)&v13 = *(_QWORD*)v8;
			if ((_QWORD)v8 == *(_QWORD*)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v11;
			else
				**((_QWORD**)&v8 + 1) = v11;
			if ((_QWORD)v8 == *(_QWORD*)(a1 + 104))
				*(_QWORD*)(a1 + 104) = *((_QWORD*)&v8 + 1);
			*(_QWORD*)v8 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v8;
			v8 = v13;
		}
		else
		{
			*((_QWORD*)&v8 + 1) = v8;
			*(_QWORD*)&v8 = *(_QWORD*)v8;
		}
	}
	return 1i64;
}

