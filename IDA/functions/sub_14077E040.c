//----- (000000014077E040) ----------------------------------------------------
__int64 __fastcall sub_14077E040(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax

	if (!*(_DWORD*)(a1 + 276))
	{
		v2 = *(_QWORD*)(qword_140C65898 + 28048);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4i64 * *(_QWORD*)(v2 + 48) + 8);
		if ((_DWORD)v2)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v3 = sub_1405A5B90(qword_140C65898, v2)) != 0
				|| (v3 = sub_1407A0FD0(qword_140C65B70, v2)) != 0)
			{
				sub_1405C7620((__int64*)a1, v3);
			}
		}
	}
	return sub_1405C8EC0(a1);
}
// 14077E08E: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

