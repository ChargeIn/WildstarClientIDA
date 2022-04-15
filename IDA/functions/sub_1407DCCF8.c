//----- (00000001407DCCF8) ----------------------------------------------------
__int64* __fastcall sub_1407DCCF8(unsigned int a1, _WORD* a2)
{
	__int64* v4; // rbx
	LPVOID v6; // rax
	LPVOID v7; // rax
	void* v8; // rcx

	if (a1 > 5 || !a2)
		return 0i64;
	v4 = (__int64*)sub_1407E2BB0(0x10ui64, 1ui64);
	if (!v4)
	{
	LABEL_4:
		*(_DWORD*)sub_1407DE1B0() = 12;
		return 0i64;
	}
	v6 = sub_1407E2BB0(0x158ui64, 1ui64);
	*v4 = (__int64)v6;
	if (!v6)
	{
	LABEL_7:
		sub_1407E14C0(v4);
		goto LABEL_4;
	}
	v7 = sub_1407E2BB0(0x228ui64, 1ui64);
	v8 = (void*)*v4;
	v4[1] = (__int64)v7;
	if (!v7)
	{
		sub_1407E14C0(v8);
		goto LABEL_7;
	}
	sub_1407DC730((int*)v8, (__int64)&unk_140C102F0);
	if (sub_1407DD1D0((UINT*)*v4, a1, a2))
	{
		if (!(unsigned int)sub_1407E368C(*(_DWORD*)(*v4 + 4), v4[1]))
		{
			*(_DWORD*)v4[1] = 1;
			return v4;
		}
		sub_1407E14C0((LPVOID)v4[1]);
	}
	sub_1407E6958(*v4);
	sub_1407E67C0((char*)*v4);
	sub_1407E14C0(v4);
	return 0i64;
}

