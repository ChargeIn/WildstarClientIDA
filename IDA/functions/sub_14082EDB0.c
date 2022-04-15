//----- (000000014082EDB0) ----------------------------------------------------
void __fastcall sub_14082EDB0(__int64 a1, int a2)
{
	__int128 v2; // rdi
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rax
	__int128 v8; // [rsp+20h] [rbp-28h]

	v2 = *(unsigned __int64*)(a1 + 144);
	while ((_QWORD)v2)
	{
		v5 = *(_QWORD*)(v2 + 16);
		if (*(_DWORD*)(v5 + 56) == a2)
		{
			v6 = *(_DWORD*)(v5 + 64);
			if (!v6)
			{
				sub_14082FA40(a1, *(_QWORD*)(v2 + 16));
				v7 = *(_QWORD*)v2;
				*((_QWORD*)&v8 + 1) = *((_QWORD*)&v2 + 1);
				*(_QWORD*)&v8 = *(_QWORD*)v2;
				if ((_QWORD)v2 == *(_QWORD*)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v7;
				else
					**((_QWORD**)&v2 + 1) = v7;
				if ((_QWORD)v2 == *(_QWORD*)(a1 + 152))
					*(_QWORD*)(a1 + 152) = *((_QWORD*)&v2 + 1);
				*(_QWORD*)v2 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v2;
				v2 = v8;
				continue;
			}
			*(_DWORD*)(v5 + 64) = v6 - 1;
		}
		*((_QWORD*)&v2 + 1) = v2;
		*(_QWORD*)&v2 = *(_QWORD*)v2;
	}
}

