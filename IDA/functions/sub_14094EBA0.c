//----- (000000014094EBA0) ----------------------------------------------------
const void**** sub_14094EBA0()
{
	const void*** v0; // rbx
	int i; // edi
	const void**** result; // rax

	v0 = (const void***)&qword_140C7A200;
	for (i = 31; i >= 0; --i)
	{
		if (*--v0)
			result = sub_1401A4A00(v0);
	}
	return result;
}
// 140C7A200: using guessed type __int64 qword_140C7A200;

