//----- (0000000140058710) ----------------------------------------------------
__int64 __fastcall sub_140058710(__int64 a1, unsigned __int64* a2, unsigned __int64 a3)
{
	__int64 v6; // rbx
	__int64 result; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	result = sub_140062650(a1, a2, a3);
	*(_QWORD*)v6 = result;
	*(_DWORD*)(v6 + 8) = 4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

