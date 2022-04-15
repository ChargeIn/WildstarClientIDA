//----- (0000000140285A70) ----------------------------------------------------
__int64 __fastcall sub_140285A70(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	**(float**)(*(_QWORD*)(a1 + 224) + 48i64) = *(float*)a2 * 0.5;
	*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 48i64) + 4i64) = *(float*)(a2 + 4) * 0.5;
	*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 48i64) + 8i64) = *(float*)(a2 + 8) * 0.5;
	result = *(unsigned int*)(a2 + 12);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 48i64) + 12i64) = result;
	return result;
}

