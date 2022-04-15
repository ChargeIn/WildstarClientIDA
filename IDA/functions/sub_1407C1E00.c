//----- (00000001407C1E00) ----------------------------------------------------
__int64 __fastcall sub_1407C1E00(__int64 a1)
{
	_DWORD* v2; // rax
	unsigned int v3; // ecx

	v2 = sub_1407C0C50(*((_QWORD**)&unk_140C66660 + qword_140C66658), *(__int16***)(a1 + 16));
	v3 = 0;
	*(_QWORD*)(a1 + 40) = v2;
	if (!v2)
		return (unsigned int)-2147467259;
	return v3;
}
// 140C66658: using guessed type __int64 qword_140C66658;

