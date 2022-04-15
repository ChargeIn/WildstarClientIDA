//----- (00000001402FB490) ----------------------------------------------------
__int64 __fastcall sub_1402FB490(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 1232);
	for (*(_QWORD*)(a1 + 1224) = a2; v2; v2 = *(_QWORD*)(v2 + 1248))
		result = sub_1402FB490(v2, *(_QWORD*)(a1 + 1224));
	return result;
}

