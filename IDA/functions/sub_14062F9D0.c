//----- (000000014062F9D0) ----------------------------------------------------
__int64 __fastcall sub_14062F9D0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int i; // ebp
	unsigned int j; // esi
	unsigned int k; // edi
	int v7[2]; // [rsp+20h] [rbp-38h] BYREF
	int v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+2Ch] [rbp-2Ch]
	int v10; // [rsp+30h] [rbp-28h]

	dword_140C7E580 = 0;
	v7[0] = *(_DWORD*)(a1 + 32);
	v7[1] = *(_DWORD*)(a1 + 20);
	if ((dword_140DC49A8 & 1) == 0)
	{
		dword_140DC49A8 |= 1u;
		sub_1401AD620((__int64)&unk_140DC49B0, L"ModelSequence");
	}
	sub_1401ADA40((__int64)&unk_140DC49B0, *(_DWORD*)(a1 + 36));
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			for (k = 0; k < 2; ++k)
			{
				if (i)
					v8 = *(_DWORD*)(a1 + 28);
				else
					v8 = 0;
				if (j)
					v9 = *(_DWORD*)(a1 + 24);
				else
					v9 = 0;
				if (k)
					v10 = *(_DWORD*)(a1 + 36);
				else
					v10 = 0;
				sub_14062F300(v2, (__int64*)a1, (__int64)v7);
			}
		}
	}
	return 0i64;
}
// 14062FA8E: variable 'v2' is possibly undefined
// 140B281F8: using guessed type wchar_t aModelsequence_0[14];
// 140C7E580: using guessed type int dword_140C7E580;
// 140DC49A8: using guessed type int dword_140DC49A8;

