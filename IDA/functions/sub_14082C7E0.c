//----- (000000014082C7E0) ----------------------------------------------------
__int64* __fastcall sub_14082C7E0(__int64 a1, int a2)
{
	__int64* result; // rax
	__int64 v5; // rcx
	__int128 v6; // rdi
	__int64 v7; // r8
	__int64 v8; // rax
	__int128 v9; // [rsp+20h] [rbp-28h]

	for (result = *(__int64**)(a1 + 144); result; result = (__int64*)*result)
	{
		v5 = result[2];
		if (*(_DWORD*)(v5 + 56) == a2 && MEMORY[0x3C] != 6176)
			++* (_DWORD*)(v5 + 64);
	}
	v6 = *(unsigned __int64*)(a1 + 96);
	while ((_QWORD)v6)
	{
		v7 = *(_QWORD*)(v6 + 16);
		result = *(__int64**)(v7 + 8);
		if (*(_DWORD*)(v7 + 56) != a2 || *((_WORD*)result + 30) == 6176)
		{
			*((_QWORD*)&v6 + 1) = v6;
			*(_QWORD*)&v6 = *(_QWORD*)v6;
		}
		else
		{
			sub_14082BF30(a1, *((_DWORD*)result + 14), v7, 0);
			v8 = *(_QWORD*)v6;
			*((_QWORD*)&v9 + 1) = *((_QWORD*)&v6 + 1);
			*(_QWORD*)&v9 = *(_QWORD*)v6;
			if ((_QWORD)v6 == *(_QWORD*)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v8;
			else
				**((_QWORD**)&v6 + 1) = v8;
			if ((_QWORD)v6 == *(_QWORD*)(a1 + 104))
				*(_QWORD*)(a1 + 104) = *((_QWORD*)&v6 + 1);
			result = *(__int64**)(a1 + 112);
			*(_QWORD*)v6 = result;
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v6;
			v6 = v9;
		}
	}
	return result;
}

